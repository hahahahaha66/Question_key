#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_CLIPBOARD_CONTENT_LENGTH 1024

// 函数：转义特殊字符
void escape_shell_chars(char *str) {
    char buffer[MAX_CLIPBOARD_CONTENT_LENGTH * 2]; // 存储转义后的字符串
    size_t j = 0;
    for (size_t i = 0; i < strlen(str); i++) {
        switch (str[i]) {
            case '"':
                buffer[j++] = '\\';
                buffer[j++] = '"'; // 转义双引号
                break;
            case '\\':
                buffer[j++] = '\\';
                buffer[j++] = '\\'; // 转义反斜杠
                break;
            default:
                buffer[j++] = str[i]; // 其他字符不变
        }
    }
    buffer[j] = '\0';
    strcpy(str, buffer); // 将转义后的内容拷贝回原始字符串
}

int main() {
    char clipboard_content[MAX_CLIPBOARD_CONTENT_LENGTH];

    // 通过xclip获取剪切板内容
    FILE *fp = popen("xclip -selection clipboard -o", "r");
    if (fp == NULL) {
        perror("Failed to get clipboard content");
        return 1;
    }

    // 从xclip中读取剪贴板内容
    size_t n = fread(clipboard_content, 1, MAX_CLIPBOARD_CONTENT_LENGTH - 1, fp);
    if (n == 0) {
        printf("No content in clipboard.\n");
        return 1;
    }
    clipboard_content[n] = '\0';  // 确保字符串结束

    fclose(fp);

    // 输出剪贴板内容（可选，调试用）
    printf("Clipboard content: %s\n", clipboard_content);

    // 转义剪贴板内容中的特殊字符，以便在命令行中安全使用
    escape_shell_chars(clipboard_content);

    // 等待5秒钟
    int time=3;
    printf("Waiting %d seconds...\n",time);
    for(int i=time;i>0;i--){
        printf("%d\n",i);
        sleep(1);
    }

    // 为防止特殊字符引起的错误，对剪贴板内容进行转义处理
    // 这里我们用双引号包裹内容，并且对可能的特殊字符进行转义
    char command[2048];       
    snprintf(command, sizeof(command), "xdotool type --delay 100 \"%s\"", clipboard_content);

    // 执行模拟键盘输入命令
    if (system(command) == -1) {
        perror("Failed to execute xdotool command");
        return 1;
    }

    return 0;
}