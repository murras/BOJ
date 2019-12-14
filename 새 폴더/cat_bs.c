#define CONDITION(code)   do {if (__CONDITION__) {code;}} while(0)
#define __CONDITION__  0

#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int b_point= 0, s_point = 0,line_number= 0;/* b_point, s_point 는 명령어                                                                           b,s line_number는 줄넘버*/
static int line = 0;
static int cha, prev, blank;



int main(int argc, char **argv)
{
int view_file(FILE *fp);
  FILE *fp;
    int errnum;
        int col, row;
        int flag = 1;
             if(argc == 1) {
                   exit(0);
          }

        for (row = 1; row < argc && flag; row++) {
          if (argv[row][0] == '-') {
            col = 1;
            while (argv[row][col] != 0) {
              switch (argv[row][col]) {
                case 'b': /* 빈줄에 줄번호 출력 안되게 */
                  line_number= 1; b_point= 1; break;
                case 'n': /* 줄번호 */
                  line_number= 1; break;
               case 's': /* 띄어쓰기 뭉치기*/
               s_point = 1; break;
             case '-': /* '--' 코맨드 라인  */
            CONDITION(fprintf(stderr, "%s:%0d: argv[%0d][%0d]: '%c'\n", argv[0], __LINE__, row, col, argv[row][col]));
               col = strlen(argv[row]);
               if (col == 2)
                  flag = 0;
               else

              col--;
             break;
           default:
     break;

            }
            col++;
        }
         if (argv[row][1] != 0) {
             for (col = row; col < argc - 1; col++) argv[col] = argv[col + 1];
           argc--; row--;
         }
         }
     }

       prev = '\n';
       for (col = 1; col < argc; col++)

          if ((fp = fopen(argv[col], "r")) != NULL) {//fopen함수는 여기서 파일을 읽기 모드로 여는 것을 담당합니다.
             view_file(fp);
             fclose(fp);
          }
          else {
             break;
          }


      }
    int view_file(FILE *fp) {
      blank = 0;

     while ((cha = getc(fp)) != EOF) {
       if (prev == '\n') {
         ++blank;
          if (s_point && cha == '\n' && blank > 1)
          continue;
          if (line_number)
            if (!b_point|| cha != '\n')
             fprintf(stdout, "%6d\t", ++line);
        }
        else
        blank = 0;
         fprintf(stdout, "%c", cha);
         prev = cha;
      }
       return(fflush(stdout));
    }