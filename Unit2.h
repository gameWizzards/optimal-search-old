//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ValEdit.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>

#include <Vcl.Imaging.GIFImg.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TStringGrid *StringGrid1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TSaveDialog *SaveDialog1;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *ExporttoExcel1;
	TMenuItem *ExporttoExcel2;
	TMenuItem *N2;
	TComboBox *ComboBox1;
	TMenuItem *Exporttotxt1;
	TSaveTextFileDialog *SaveTextFileDialog1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall ExporttoExcel2Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall Exporttotxt1Click(TObject *Sender);
private:	// User declarations
public:     // User declarations
	__fastcall TForm2(TComponent* Owner);

__int64 number_nodes, d_max, number[10], child_bisection;
float a;
__int64 node_order, r;
double max, min, A[100][10];
AnsiString str;
bool flag_pair_value;
void start_calc(long int, int), calc_metrik(__int64, int), find_sub_system(long int, int);
void addCell(int, int, String);
void find_sub_upper(long int, int);  //Методы отличаются друг от друга!
void makeExcel();
int conf;

//Набір констант

const int N = 1, d = 2, I = 3, D = 4, B = 5, W = 6, P = 7;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
