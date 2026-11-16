// sub_4F175E0
// rva 0x04f175e0  size 575  section .text  group text
// window base 0x184f175e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F175E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  _QWORD v20[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  unsigned int *v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+30h] [rbp-8h]
  unsigned int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v20 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a1;
    v24 = a6;
    v21 = a5;
    sub_1EB84E0();
LABEL_27:
    v25 = a1;
    v24 = a6;
    sub_2771080();
LABEL_28:
    v22 = v9;
    v25 = a1;
    v24 = a6;
    v21 = a5;
    sub_2771080();
    goto LABEL_29;
  }
  *(_DWORD *)(a3 + 20) = (unsigned __int64)(a5 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
  }
  *(_BYTE *)(a3 + 28) = MEMORY[0xea6e104]/* 0xea6e104 */ & a6;
  if ( a5 == v6 )
    goto LABEL_27;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a5 + 24);
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    v18 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) = 0;
  }
  v8 = *(unsigned int *)(a5 + 28);
  v9 = v6 + 8 * v8;
  if ( (_DWORD)a1 != 0 )
  {
    v10 = v6 + 8 * v8;
  }
  else
  {
    if ( (_DWORD)v8 == 0 )
    {
LABEL_30:
      sub_2771080(a1, a2, a3, a4: v9);
      __builtin_debugtrap();
      return sub_4F17820();
    }
    if ( (*(_WORD *)(v6 + 8 * v8 + 66) & 1) != 0 )
      v10 = v6 + 8 * v8;
    else
      v10 = v6 + 34085496;
  }
  *(_DWORD *)(a3 + 12) = (unsigned __int64)(v10 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - a2) >> 9) + 0x38) = 0;
  }
  v23 = (unsigned int *)a3;
  if ( (_DWORD)v8 == 0 )
    goto LABEL_28;
  v25 = a1;
  v24 = a6;
  v21 = a5;
  v22 = v6 + 8 * v8;
  v11 = sub_4F60E20(a1, a2, a3: v22);
  if ( v11 == v6 )
  {
LABEL_29:
    sub_2771080(a1: v25, a2: v13, a3: v23);
    goto LABEL_30;
  }
  v20[2] = v11;
  v14 = sub_1F252C0(a1: v12, a2: v13, a3: v11);
  v15 = (unsigned __int64)v23;
  v23[2] = (unsigned __int64)(v14 - v6) >> 3;
  result = *(unsigned int *)v15;
  if ( (result & 2) != 0 )
  {
    v19 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (v15 - v19) >> 9;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v19) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
