
#include<stdio.h>
#include<stdlib.h>
int main() {
    printf("\n");
    printf("---------------------------\n");
    printf("|                         |\n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (.<  U >.)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   | �K�@���� |          |\n");
    printf("|   | �e������ |          |\n");
    printf("|   ============          |\n");
    printf("|                         |\n");
    printf("---------------------------\n");
    printf("|                         |\n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (>  u <)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  �����N  |          |\n");
    printf("|   |  ���~��  |          |\n");
    printf("|   ============          |\n");
    printf("|                         |\n"); 
    printf("---------------------------\n");
    system("PAUSE");//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    system("CLS");//�M���ù�
    fflush(stdin);//��input buffer�b��
    printf("�п�J�K�X");
    int mima;
    scanf("%d",&mima);
    if(mima!=2025){printf("��J���~");return 0; 
    }
    printf("---------------------------\n");
    printf("| 'A'...'Z' : Uppercase   |\n");
    printf("| 'a'...'z' : Lowercase   |\n");
    printf("| '0'...'9' : Digit       |\n");
    printf("| Otherwise : Your name   |\n");
    printf("---------------------------\n");
    printf("�п�J1�Ӧr��");
    char ziyuan;
    scanf(" %c",&ziyuan);
    if(ziyuan>='A'&&ziyuan<='Z')printf("Uppercase");
    else if(ziyuan>='a'&&ziyuan<='z')printf("Lowercase");
    else if(ziyuan>='1'&&ziyuan<='9')printf("Digit");
    else printf("E1B49�i�x��");
    system("PAUSE");
    system("CLS");
    fflush(stdin);
    return 0;
}
//�߱o�G�ܦ����٫����A�i�H�ۤv�]�w�������@�ئb�g�������Pı
//�A�ܻšC
