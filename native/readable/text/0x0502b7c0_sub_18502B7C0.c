// sub_502B7C0
// rva 0x0502b7c0  size 150  section .text  group text
// window base 0x18502b7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502B7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  int v25; // [rsp+1Ch] [rbp-Ch]
  unsigned int v26; // [rsp+20h] [rbp-8h]
  unsigned int v27; // [rsp+24h] [rbp-4h]

  v24 = a3;
  v27 = a5;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_5;
  v26 = sub_6116840();
  v11 = v24;
  v12 = *(unsigned int *)(v24 + 4);
  if ( (_DWORD)v12 == 0 )
  {
    while ( 1 )
    {
      v23 = sub_276BEE0(a1: v9, a2: v10, a3: v11, a4: v7 + 8 * v12);
      sub_6116940(a1: v17, a2: v18, a3: v26);
      sub_2769900(a1: v20, a2: v21, a3: v23, a4: v19, a5: &a7);
LABEL_5:
      sub_1EB84E0();
    }
  }
  v13 = *(unsigned __int8 *)(v7 + 8 * v12 + 29);
  v25 = v13;
  sub_4ECE6A0(a1: v9, a2: v10, a3: v24, a4: v13, a5: v27, a6: (unsigned int)v13);
  result = sub_6116940(a1: v14, a2: v15, a3: v26);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
