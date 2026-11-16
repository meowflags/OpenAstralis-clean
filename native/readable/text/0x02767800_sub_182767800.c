// sub_2767800
// rva 0x02767800  size 487  section .text  group text
// window base 0x182767800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2767800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]
  __int64 v28; // [rsp+20h] [rbp-28h]
  __int64 v29; // [rsp+28h] [rbp-20h]
  __int64 v30; // [rsp+30h] [rbp-18h]
  __int64 v31; // [rsp+38h] [rbp-10h]
  __int64 v32; // [rsp+40h] [rbp-8h]

  v32 = a3;
  v31 = a5;
  v30 = a6;
  v29 = a1;
  v28 = a2;
  v27 = a4;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_16;
  if ( a3 == v7 )
  {
    while ( 1 )
    {
      v21 = (_DWORD *)sub_276BEE0();
      v20 = *v21 >> 3;
      if ( *(__int16 *)(v7 + 8 * v20 + 62) < 5
        || *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v20 + 16) + 28) != 88027 )
      {
        v21 = (_DWORD *)sub_2769900(a1: v22, a2: v23, a3: v21, a4: v24, a5: &a7);
      }
      v26 = v21;
      sub_28C1C40(a1: v22, a2: v23, a3: v7 + 367657264);
LABEL_16:
      sub_1EB84E0();
    }
  }
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v9 = sub_1EAA840(a1, a2, a3: 34085384, a4, a5: 0);
    a5 = v31;
    a3 = v32;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v9 + 16;
    *(_QWORD *)v9 = 34085384;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 12) = 0;
  }
  v10 = sub_4F64440(a1, a2, a3, a4, a5, a6: v9);
  v13 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v13 + 56) > *(_QWORD *)(v8 + 32) )
  {
    v26 = (_DWORD *)v10;
    v13 = sub_1EAA920(a1: v11, a2: v12, a3: 40452736);
    v10 = (__int64)v26;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v13 + 56;
    *(_DWORD *)v13 = 40452736;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0;
  }
  v14 = v28;
  v15 = v29;
  v16 = v30;
  v17 = v31;
  v18 = v32;
  *(_DWORD *)(v13 + 32) = (unsigned __int64)(v27 - v7) >> 3;
  *(_DWORD *)(v13 + 28) = (unsigned __int64)(v14 - v7) >> 3;
  *(_DWORD *)(v13 + 20) = (unsigned __int64)(v15 - v7) >> 3;
  *(_DWORD *)(v13 + 16) = (unsigned __int64)(v10 - v7) >> 3;
  *(_DWORD *)(v13 + 12) = (unsigned __int64)(v16 - v7) >> 3;
  *(_DWORD *)(v13 + 8) = (unsigned __int64)(v17 - v7) >> 3;
  *(_DWORD *)(v13 + 4) = (unsigned __int64)(v18 - v7) >> 3;
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v15, a2: v14, a3: v13);
  return v13;
}
