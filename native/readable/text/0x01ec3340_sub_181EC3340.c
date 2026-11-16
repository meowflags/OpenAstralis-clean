// sub_1EC3340
// rva 0x01ec3340  size 199  section .text  group text
// window base 0x181ec3340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC3340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  _DWORD *v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_7;
  v26 = a5;
  v25 = v7 + 94164800;
  sub_5A9A080(a1, a2, a3: v7 + 94164800);
  v12 = (_DWORD *)sub_AF110A0(a1: v10, a2: v11, a3: v7 + 94164808, a4: v9, a5: v26, a6: v7);
  if ( v12 != v7 && *v12 >> 3 != 4262015 )
  {
    while ( 1 )
    {
      v24 = sub_276A220(a1: v14, a2: v15, a3: v12, a4: v13, a5: v7 + 8524030);
      sub_5A98320(a1: v18, a2: v19, a3: v25, a4: v17, a5: 1);
      sub_2769900(a1: v21, a2: v22, a3: v24, a4: v20, a5: &a7);
LABEL_7:
      v26 = a5;
      v12 = (_DWORD *)sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v23);
    }
  }
  v24 = (__int64)v12;
  sub_5A98320(a1: v14, a2: v15, a3: v25, a4: v13, a5: 1);
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v24;
}
