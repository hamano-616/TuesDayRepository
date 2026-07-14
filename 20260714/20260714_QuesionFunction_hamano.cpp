#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_hamano.h"
using namespace std;
//球種の表示
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//結果の表示
void Result(int out)
{
    //アウトの回数で結果を表示
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//入力チェック
int InputCheck(int min, int max)
{
    int player;
    //正しい範囲の数字が入力されるまでループ
    while (true)
    {
        cin >> player;

        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}