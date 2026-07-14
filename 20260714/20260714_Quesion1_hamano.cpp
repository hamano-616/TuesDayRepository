#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_hamano.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数
    int player;
    int cpu;
    //確率用
    int probability;
    //スコア
    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;
    //乱数初期化
    srand((unsigned int)time(nullptr));
    //アナウンス
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    do
    {
        //説明
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;
        //playerに入力チェック後の数字を入れる
        player = InputCheck(PITCHING_MIN, PITCHING_MAX);
        //PitchingType関数で球種を表示
        PitchingType(player);
        //CPUの球種を乱数で生成
        cpu = rand() % PROBABILITY;
        //確率のための乱数生成
        probability = rand() % PROBABILITY;


        //もしCPUが外しても1/4の確率でボールにする
        if (player != cpu)
        {
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        //もしplayerとCPUが同じだったら
        else
        {
            //ストライクとボールの初期化
            strike = 0;
            ball = 0;
            //1/4を引くとアウトにできる
            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //三振とフォアボールの判定
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }
            //ストライクとボールの初期化
            strike = 0;
            ball = 0;
        }
        //スコア表示
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;
      //アウト3回かヒット4回までループ
    } while (out < OUT_COUNT && hit < HIT_COUNT);
    //RESULT関数の表示
    Result(out);

    return 0;
}