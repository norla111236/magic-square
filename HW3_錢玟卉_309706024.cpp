//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HW3_錢玟卉_309706024.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int flag;
int num;
int place;
#define MaxSize 21
int square[MaxSize][MaxSize];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

void magicsquare(int n, int flag, int place) {
	int i, j, k, l, data;
	//判斷輸入範圍是否合法
	if ((n>MaxSize)||(n<1))
	{
		Form1->Memo1->Lines->Add("輸入值不滿足介於5~21間");
		return;
	}
	//判斷輸入是否為偶數
	else if ((n % 2) == 0)
	{
		Form1->Memo1->Lines->Add("輸入值不可為偶數");
		return;
	}
	//初始化矩陣
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			square[i][j] = 0;
		}
	}
	//不同起始位置的確立
	if(place == 1){
		i = 0;
		j = (n - 1) / 2;
	}
	if(place == 2){
		i = n - 1;
		j = (n - 1) / 2;
	}
	//設定起始位置1
	square[i][j] = 1;
	data = 2;
   //不同方向的開展
	if(flag == 1){
		while (data <= n * n)
		{
			k = (i - 1 < 0) ? n - 1 : i - 1;
			l = (j - 1 < 0) ? n - 1 : j - 1;
			if (square[k][l] > 0) { i = (i + 1) % n; }
			else { i = k; j = l; }
			square[i][j] = data++;
		}
	}
	else if (flag == 2){
        while (data <= n * n)
		{
			k = (i + 1 >= n) ? 0 : i + 1;
			l = (j - 1 < 0) ? n - 1 : j - 1;
			if (square[k][l] > 0) {
				if((i - 1)>=0){
				i = (i - 1) % n;
				}
				else{
				i = n-1;
				}
			}
			else { i = k; j = l; }
			square[i][j] = data++;
		}
	}
	else if (flag == 3){
		while (data <= n * n)
		{
			k = (i - 1 < 0) ? n - 1 : i - 1;
			l = (j + 1 >= n) ? 0 : j + 1;
			if (square[k][l] > 0) { i = (i + 1) % n; }
			else { i = k; j = l; }
			square[i][j] = data++;
		}
	}
	else if (flag == 4){
		while (data <= n * n)
		{
			k = (i + 1 >= n) ? 0 : i + 1;
			l = (j + 1 >= n) ? 0 : j + 1;
			if (square[k][l] > 0) {
				if((i - 1)>=0){
				i = (i - 1) % n;
				}
				else{
				i = n-1;
				}
			}
			else { i = k; j = l; }
			square[i][j] = data++;
		}
	}
	//印出
	int num = n;
	Form1->Memo1->Lines->Add(IntToStr(num) + "x" + IntToStr(num) + " metrix");
	String array;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			array+=IntToStr(square[i][j])+"\t";
		}
		array+="\r\n";
	}
	Form1->Memo1->Lines->Add(array);
//用 grid 顯示
Form1->StringGrid1->RowCount = n;
Form1->StringGrid1->ColCount = n;
	for (i=0; i<n; i++)
	{   for (j=0; j<n; j++)
		{    Form1->StringGrid1->Cells[j][i] = IntToStr(square[i][j]);
			// VS C++ 語法則用： StringGrid1->Rows[i]->Cells[j]->Value = W[i][j];
		}
	}

}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 num = StrToInt(Edit1->Text);
 flag = 0;
 place = 0;
 //方向選擇
	if(RadioButton1 -> Checked){
	flag = 1;
	}
	if(RadioButton2 -> Checked){
	flag = 2;
	}
	if(RadioButton3 -> Checked){
	flag = 3;
	}
	if(RadioButton4 -> Checked){
	flag = 4;
	}
 //測試test值
 //int test = flag;
 //Form1->Memo1->Lines->Add("flag is" +IntToStr(test));
 //起始選擇
	if(RadioButton5 -> Checked){
	place = 1;
	}
	if(RadioButton6 -> Checked){
	place = 2;
	}
 //測試按鈕是否被選擇
	if(flag == 0){
	  Form1->Memo1->Lines->Add("please select the direction! ");
	}
	if(place == 0){
	  Form1->Memo1->Lines->Add("please select the first position to start! ");
	}
 //執行主程式
	if((place != 0) &&(flag != 0 )){
 //	  Form1->Memo1->Lines->Add("success ");
	  magicsquare(num,flag,place);
	}
 Form1->Memo1->Lines->Add("----------------------------------------------------------------------------------------");
}
//---------------------------------------------------------------------------
