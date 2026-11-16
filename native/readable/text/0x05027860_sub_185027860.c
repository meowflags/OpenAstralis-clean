// sub_5027860
// rva 0x05027860  size 313  section .text  group text
// window base 0x185027860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5027860(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]
  __int64 v24; // [rsp+18h] [rbp-30h]
  __int64 v25; // [rsp+20h] [rbp-28h]
  __int64 v26; // [rsp+28h] [rbp-20h]
  __int64 v27; // [rsp+30h] [rbp-18h]
  __int64 v28; // [rsp+38h] [rbp-10h]
  unsigned int v29; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v14 + 8) )
  {
    v28 = a4;
    v27 = a2;
    v25 = a6;
    v24 = a5;
    v23 = a3;
    sub_1EB84E0();
LABEL_7:
    sub_2771080();
    __builtin_debugtrap();
  }
  if ( a1 == v13 )
    goto LABEL_7;
  v15 = *(_QWORD *)(v14 + 40);
  if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v14 + 32) )
    return sub_18502791B(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  *(_QWORD *)(v14 + 40) = v15 + 32;
  *(_DWORD *)v15 = 40478160;
  *(_DWORD *)(v15 + 4) = 0;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  v23 = a3;
  *(_DWORD *)(v15 + 8) = (unsigned __int64)(a4 - v13) >> 3;
  *(_DWORD *)(v15 + 4) = (unsigned __int64)(a2 - v13) >> 3;
  v16 = *(_DWORD *)(a1 + 8);
  v24 = a5;
  v25 = a6;
  v26 = a1;
  v27 = a2;
  v28 = a4;
  v22 = v15;
  v29 = v16;
  result = sub_1ED3C80(a1: 0, a2: v16, a3: a5, a4: v15, a5: a6, a6: a1);
  if ( *(int *)(v14 + 16) <= 0 )
    return sub_277F280(a1: v19, a2: v20, a3: v18, a4: v22);
  return result;
}
