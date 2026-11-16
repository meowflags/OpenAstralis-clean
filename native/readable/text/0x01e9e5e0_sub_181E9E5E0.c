// sub_1E9E5E0
// rva 0x01e9e5e0  size 183  section .text  group text
// window base 0x181e9e5e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E9E5E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  int v9; // ecx
  bool v10; // dl
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // r9d
  char v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+10h] [rbp-28h]
  __int64 v27; // [rsp+18h] [rbp-20h]
  unsigned int v28; // [rsp+24h] [rbp-14h]
  unsigned __int64 v29; // [rsp+28h] [rbp-10h]
  int v30; // [rsp+34h] [rbp-4h]

  v27 = a3;
  v30 = a5;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v26 = a6;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v25);
    goto LABEL_6;
  }
  v29 = *(_QWORD *)(v6 + 376652664);
  if ( *(_DWORD *)(a3 + 8) == 0 )
  {
LABEL_6:
    sub_276EFE0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1E9E6A0();
    return;
  }
  v26 = a6;
  v8 = sub_1E9F600(a1, a2, a3: v6 + 376657072);
  v9 = v29;
  v10 = v29 > v8;
  v11 = v27;
  *(_BYTE *)(v27 + 24) = v10;
  v28 = v30 == 0;
  sub_1E9DEC0(a1: v12, a2: v13, a3: v11, a4: v9, a5: v28, a6: v14);
  sub_1E9E380(a1: v16, a2: v17, a3: v27, a4: v15, a5: v18, a6: v19);
  sub_1E9D800(a1: v21, a2: v22, a3: v27, a4: v20, a5: v23, a6: v24);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
}
