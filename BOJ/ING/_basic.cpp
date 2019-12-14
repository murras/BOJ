#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> history) {
    vector<int> answer;

    int mat_A = 5, mat_B = 100, mat_C = 10, mat_D = 5, mat_E = 2;
    int rec_A = 4, rec_B = 50, rec_C = 10, rec_D = 10, rec_E = 4;
    int history_size = history.size();
    int price;
    for (int i = 0; i < history_size; ++i) {
        // cout << mat_A << " " << mat_B << " " << mat_C << " " << mat_D << " " << mat_E << '\n';
        price = 0;
        if(history[i] == "0.0") { 
            vector<int> err;
            err.push_back(-1);
            return err;
        }
        else if (history[i] == "0.5") {
            rec_A *= 0.5, rec_B *= 0.5, rec_C *= 0.5, rec_D *= 0.5, rec_E *= (0.5 / 2);  // 고추를 반만 사용
            while (true) {
                if (mat_A < rec_A) {  // 남은 족발양보다 필요한게 많으면
                    price += 10000;   // 10kg 10000원에 구매
                    mat_A += 10;
                    continue;
                }
                if (mat_B < rec_B) {  // 남은 양파양보다 필요한게 많으면
                    price += 3000;    // 100g 3000원에 구매
                    mat_B += 100;
                    continue;
                }
                if (mat_C < rec_C) {  // 남은 대파양보다 필요한게 많으면
                    price += 1000;    // 30cm 1000원에 구매
                    mat_C += 30;
                    continue;
                }
                if (mat_D < rec_D) {  // 남은 마늘양보다 필요한게 많으면
                    price += 2000;    // 50g 2000원에 구매
                    mat_D += 50;
                    continue;
                }
                if (mat_E < rec_E) {  // 남은 고추양보다 필요한게 많으면 {
                    price += 1000;    // 10g 1000원에 구매
                    mat_E += 10;
                    continue;
                }
                mat_A -= rec_A;
                mat_B -= rec_B;
                mat_C -= rec_C;
                mat_D -= rec_D;
                mat_E -= rec_E;
                break;
            }
            rec_A = 4, rec_B = 50, rec_C = 10, rec_D = 10, rec_E = 4;
        } else if (history[i] == "1.0") {
            while (true) {
                if (mat_A < rec_A) {  // 남은 족발양보다 필요한게 많으면
                    price += 10000;   // 10kg 10000원에 구매
                    mat_A += 10;
                    continue;
                }
                if (mat_B < rec_B) {  // 남은 양파양보다 필요한게 많으면
                    price += 3000;    // 100g 3000원에 구매
                    mat_B += 100;
                    continue;
                }
                if (mat_C < rec_C) {  // 남은 대파양보다 필요한게 많으면
                    price += 1000;    // 30cm 1000원에 구매
                    mat_C += 30;
                    continue;
                }
                if (mat_D < rec_D) {  // 남은 마늘양보다 필요한게 많으면
                    price += 2000;    // 50g 2000원에 구매
                    mat_D += 50;
                    continue;
                }
                if (mat_E < rec_E) {  // 남은 고추양보다 필요한게 많으면 {
                    price += 1000;    // 10g 1000원에 구매
                    mat_E += 10;
                    continue;
                }
                mat_A -= rec_A;
                mat_B -= rec_B;
                mat_C -= rec_C;
                mat_D -= rec_D;
                mat_E -= rec_E;
                break;
            }
        } else if (history[i] == "1.5") {
            rec_A *= 1.5, rec_B *= 1.5, rec_C *= 1.5, rec_D *= 1.5, rec_E *= (1.5 / 2);  // 고추를 반만 사용
            while (true) {
                if (mat_A < rec_A) {  // 남은 족발양보다 필요한게 많으면
                    price += 10000;   // 10kg 10000원에 구매
                    mat_A += 10;
                    continue;
                }
                if (mat_B < rec_B) {  // 남은 양파양보다 필요한게 많으면
                    price += 3000;    // 100g 3000원에 구매
                    mat_B += 100;
                    continue;
                }
                if (mat_C < rec_C) {  // 남은 대파양보다 필요한게 많으면
                    price += 1000;    // 30cm 1000원에 구매
                    mat_C += 30;
                    continue;
                }
                if (mat_D < rec_D) {  // 남은 마늘양보다 필요한게 많으면
                    price += 2000;    // 50g 2000원에 구매
                    mat_D += 50;
                    continue;
                }
                if (mat_E < rec_E) {  // 남은 고추양보다 필요한게 많으면 {
                    price += 1000;    // 10g 1000원에 구매
                    mat_E += 10;
                    continue;
                }
                mat_A -= rec_A;
                mat_B -= rec_B;
                mat_C -= rec_C;
                mat_D -= rec_D;
                mat_E -= rec_E;
                break;
            }
            rec_A = 4, rec_B = 50, rec_C = 10, rec_D = 10, rec_E = 4;
        } else if (history[i] == "2.0") {
            rec_A *= 2.0, rec_B *= 2.0, rec_C *= 2.0, rec_D *= 2.0, rec_E *= 2.0;  // 고추를 반만 사용
            while (true) {
                if (mat_A < rec_A) {  // 남은 족발양보다 필요한게 많으면
                    price += 10000;   // 10kg 10000원에 구매
                    mat_A += 10;
                    continue;
                }
                if (mat_B < rec_B) {  // 남은 양파양보다 필요한게 많으면
                    price += 3000;    // 100g 3000원에 구매
                    mat_B += 100;
                    continue;
                }
                if (mat_C < rec_C) {  // 남은 대파양보다 필요한게 많으면
                    price += 1000;    // 30cm 1000원에 구매
                    mat_C += 30;
                    continue;
                }
                if (mat_D < rec_D) {  // 남은 마늘양보다 필요한게 많으면
                    price += 2000;    // 50g 2000원에 구매
                    mat_D += 50;
                    continue;
                }
                if (mat_E < rec_E) {  // 남은 고추양보다 필요한게 많으면 {
                    price += 1000;    // 10g 1000원에 구매
                    mat_E += 10;
                    continue;
                }
                mat_A -= rec_A;
                mat_B -= rec_B;
                mat_C -= rec_C;
                mat_D -= rec_D;
                mat_E -= rec_E;
                break;
            }
            rec_A = 4, rec_B = 50, rec_C = 10, rec_D = 10, rec_E = 4;
        } else if (history[i] == "2.5") {
            rec_A *= 2.5, rec_B *= 2.5, rec_C *= 2.5, rec_D *= 2.5, rec_E *= (2.5 / 2);  // 고추를 반만 사용
            while (true) {
                if (mat_A < rec_A) {  // 남은 족발양보다 필요한게 많으면
                    price += 10000;   // 10kg 10000원에 구매
                    mat_A += 10;
                    continue;
                }
                if (mat_B < rec_B) {  // 남은 양파양보다 필요한게 많으면
                    price += 3000;    // 100g 3000원에 구매
                    mat_B += 100;
                    continue;
                }
                if (mat_C < rec_C) {  // 남은 대파양보다 필요한게 많으면
                    price += 1000;    // 30cm 1000원에 구매
                    mat_C += 30;
                    continue;
                }
                if (mat_D < rec_D) {  // 남은 마늘양보다 필요한게 많으면
                    price += 2000;    // 50g 2000원에 구매
                    mat_D += 50;
                    continue;
                }
                if (mat_E < rec_E) {  // 남은 고추양보다 필요한게 많으면 {
                    price += 1000;    // 10g 1000원에 구매
                    mat_E += 10;
                    continue;
                }
                mat_A -= rec_A;
                mat_B -= rec_B;
                mat_C -= rec_C;
                mat_D -= rec_D;
                mat_E -= rec_E;
                break;
            }
            rec_A = 4, rec_B = 50, rec_C = 10, rec_D = 10, rec_E = 4;
        }
        answer.push_back(price);
    }

    return answer;
}