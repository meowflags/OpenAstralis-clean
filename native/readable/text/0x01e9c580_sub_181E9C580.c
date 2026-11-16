// sub_1E9C580
// rva 0x01e9c580  size 459  section .text  group text
// window base 0x181e9c580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E9C580(int a1, int a2, _QWORD *a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  __int64 v14; // r8
  char *v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  char *v19; // r8
  __int64 v20; // rax
  int v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-38h]
  char *v23; // [rsp+28h] [rbp-30h]
  _QWORD *v24; // [rsp+30h] [rbp-28h]
  char *v25; // [rsp+38h] [rbp-20h]
  char *v26; // [rsp+40h] [rbp-18h]
  int v27; // [rsp+4Ch] [rbp-Ch]
  _QWORD *v28; // [rsp+50h] [rbp-8h]

  v28 = a3;
  v27 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v21);
    goto LABEL_24;
  }
  v22 = a5;
  if ( a3 == nullptr )
    goto LABEL_17;
  if ( a6 == 0 )
  {
    if ( a5 != v6 )
    {
      sub_1E9A3E0(a1, a2, a3: v6 + 376656800, a4, a5: (__int64)v28, a6: 0);
      goto LABEL_6;
    }
LABEL_25:
    sub_276EFE0();
    JUMPOUT(0x181E9C74BLL);
  }
  if ( a5 == v6 )
  {
LABEL_24:
    sub_276EFE0();
    goto LABEL_25;
  }
  v8 = a3[4];
  v9 = *a3;
  v10 = v6 + 8LL * *(unsigned int *)(v6 + 376656804);
  v26 = (char *)(a3 + 264);
  v25 = (char *)a3 + v8;
  v24 = (_QWORD *)((char *)a3 + v9);
  sub_1E98AE0(
    a1: (__int64)a3 + v8,
    a2: (__int64)a3 + v9,
    a3: v10,
    a4: 1,
    a5: (__int64)a3,
    a6: (__int64)(a3 + 264),
    a7: v21,
    a8: v6 + 370033864,
    a9: 0);
LABEL_6:
  v14 = v28[2];
  if ( v14 != 0 )
    v15 = (char *)v28 + v14;
  else
    v15 = nullptr;
  while ( v15 != nullptr )
  {
    if ( v27 != 0 )
    {
      v16 = *((_QWORD *)v15 + 4);
      v17 = *(_QWORD *)v15;
      v18 = v6 + 8LL * *(unsigned int *)(v6 + 376656804);
      v24 = v15 + 2112;
      v26 = &v15[v16];
      v23 = &v15[v17];
      v25 = v15;
      sub_1E98AE0(
        a1: (__int64)&v15[v16],
        a2: (__int64)&v15[v17],
        a3: v18,
        a4: 1,
        a5: (__int64)v15,
        a6: (__int64)(v15 + 2112),
        a7: v21,
        a8: v6 + 370033864,
        a9: 0);
    }
    else
    {
      v25 = v15;
      sub_1E9A3E0(a1: v12, a2: v13, a3: v6 + 376656800, a4: v11, a5: (__int64)v15, a6: 0);
    }
    v19 = v25;
    v20 = *((_QWORD *)v25 + 2);
    if ( *(int *)(v7 + 16) <= 0 )
      v20 = sub_277F280();
    if ( v20 != 0 )
      v15 = &v19[v20];
    else
      v15 = nullptr;
  }
LABEL_17:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
}
