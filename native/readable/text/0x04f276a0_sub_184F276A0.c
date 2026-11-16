// sub_4F276A0
// rva 0x04f276a0  size 532  section .text  group text
// window base 0x184f276a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F276A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  int v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]
  __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v31 = a5;
  v34 = a6;
  v33 = a1;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a3 + 8) == 0 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 0xFFFFFFFFLL;
  }
  v30 = a3;
  if ( a5 == v8 )
  {
LABEL_24:
    v23 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v23 + 48) > *(_QWORD *)(v9 + 32) )
      goto LABEL_28;
    *(_QWORD *)(v9 + 40) = v23 + 48;
    *(_DWORD *)v23 = 34101256;
    *(_DWORD *)(v23 + 4) = 0;
    *(_QWORD *)(v23 + 8) = 0;
    *(_QWORD *)(v23 + 16) = 0;
    *(_QWORD *)(v23 + 24) = 0;
    *(_QWORD *)(v23 + 32) = 0;
    *(_QWORD *)(v23 + 40) = 0;
    goto LABEL_26;
  }
  v32 = *(_DWORD *)(a5 + 8);
  sub_6329C40(a1: v8, a2, a3: a6, a4, a5: (unsigned int)a1, a6: v32);
  v12 = v33;
  if ( v33 != 0 )
  {
    v13 = v34;
    v14 = v31;
    v15 = v30;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v15 + 8);
      if ( (_DWORD)v22 == 0 )
      {
        while ( 1 )
        {
          sub_2771080(a1: v12, a2: v11, a3: v15, a4: v10, a5: v14, a6: v13);
LABEL_28:
          v23 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_26:
          *(_DWORD *)(v23 + 20) = 46923644;
          *(_DWORD *)(v23 + 16) = *(_DWORD *)(v8 + 374343896);
          *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - v8) >> 3;
          v29 = v23;
          sub_503B9A0(a1, a2, a3: v23, a4, a5: 0);
          sub_2769900(a1: v25, a2: v26, a3: v29, a4: v24, a5: &a7);
        }
      }
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))(v7
                                                                 + *(_QWORD *)(v8
                                                                             + 8LL * (*(_DWORD *)(v8 + 8 * v22) >> 3)
                                                                             + 160)))(
                 a1: v12,
                 a2: (unsigned int)v13,
                 a3: v8 + 8 * v22);
      if ( (int)result >= 1 )
        break;
      v32 = result;
      sub_4F27280(a1: v18, a2: v19, a3: v30, a4: v17, a5: v20, a6: v21, a7: v27, a8: v28);
      v15 = v30;
      if ( *(_DWORD *)(v30 + 8) == 0 )
      {
        if ( *(int *)(v9 + 16) <= 0 )
          sub_277F280();
        return 0xFFFFFFFFLL;
      }
      v12 = v33;
      v13 = v34;
      v14 = v31;
    }
    v32 = result;
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v18, a2: v19, a3: v30);
  }
  else
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280(a1: v33, a2: v11, a3: v30);
    return 0;
  }
  return result;
}
