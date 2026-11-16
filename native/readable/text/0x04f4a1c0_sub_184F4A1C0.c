// sub_4F4A1C0
// rva 0x04f4a1c0  size 366  section .text  group text
// window base 0x184f4a1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4A1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  int v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+1Ch] [rbp-Ch]
  int v19; // [rsp+20h] [rbp-8h]
  int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_13;
  if ( a3 == v7 )
    goto LABEL_14;
  if ( a6 > *(_DWORD *)(a3 + 8) - a5 || a5 < 0 || a6 < 0 || a5 > (int)a1 || (int)a1 > a5 + a6 )
  {
    v20 = a2;
    v19 = a1;
    v18 = a6;
    v17 = a5;
    v16 = a3;
    v10 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v8 + 32) )
      goto LABEL_15;
    *(_QWORD *)(v8 + 40) = v10 + 40;
    *(_DWORD *)v10 = 34176760;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = 0;
    while ( 1 )
    {
      *(_DWORD *)(v10 + 20) = 46923644;
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
      v15 = v10;
      sub_503B9A0(a1, a2, a3: v10, a4, a5: 0);
      sub_2769900(a1: v12, a2: v13, a3: v15, a4: v11, a5: &a7);
LABEL_13:
      v20 = a2;
      v19 = a1;
      v18 = a6;
      v17 = a5;
      v16 = a3;
      sub_1EB84E0();
LABEL_14:
      v20 = a2;
      v19 = a1;
      v18 = a6;
      v17 = a5;
      sub_2771080();
LABEL_15:
      v10 = sub_1EAA920(a1, a2, a3: 34176760);
    }
  }
  v16 = a3;
  v17 = a5;
  v18 = a6;
  v19 = a1;
  v20 = a2;
  result = sub_4F4AB00(a1, a2, a3, a4: a5, a5, a6, a7: v14);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
