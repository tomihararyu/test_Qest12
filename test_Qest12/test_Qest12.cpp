// test_Qest12.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
const int skillMAX = 5;
class Father
{
public:
    Father();//スキルをfalseで初期化
    void AttackMove();//ここで行動を決定したい
protected:
    int attack1();//行動の内容と返すダメージ
    int attack2();
    int attack3();
    int attack4();
    int attack5();
protected:
    bool SkillBool[skillMAX];//スキルの有無
    int SkillMAXMun;//所持しているスキルの数
    int* SkillProcess;//所持しているスキルの配列番号
    const char* attcknNam[skillMAX] = { "attack1","attack2", "attack3", "attack4", "attack5", };//行動名
};
Father::Father()
{
    for (int i = 0; i < skillMAX; i++)
    {
        SkillBool[i] = false;
    } 
    SkillMAXMun = 0;
}
int Father::attack1()
{
    cout << "attack1" << endl;
    return 0;
}
int Father::attack2()
{
    cout << "attack2" << endl;
    return 1;
}
int Father::attack3()
{
    cout << "attack3" << endl;
    return 2;
}
int Father::attack4()
{
    cout << "attack4" << endl;
    return 3;
}
int Father::attack5()
{
    cout << "attack5" << endl;
    return 4;
}
void Father::AttackMove()//ここでアタックを選択させて選択された関数を呼び出したい
{
    for (int i = 0; i < SkillMAXMun; i++)
    {
        cout << i<<"=" << attcknNam[SkillProcess[i]] << endl;
    }
}
class Child :public Father
{
public:
    Child();
private:
    void SkillRooc();
};
Child::Child()
{
    SkillBool[0] = true;
    SkillBool[2] = true;
    SkillBool[4] = true;
    SkillRooc();//スキルを所持させる
}
void Child::SkillRooc()
{
    int timp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (SkillBool[i] == true)
        {
            timp++;
        }
    }
    SkillMAXMun  = timp;
    SkillProcess = new int[SkillMAXMun];
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        if (SkillBool[i] == true)
        {
            SkillProcess[j] = i;
            j++;
        }
    }
}

int main()
{
    Child child;
    child.AttackMove();
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
