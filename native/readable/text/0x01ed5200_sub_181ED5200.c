// sub_1ED5200
// rva 0x01ed5200  size 1185  section .text  group text
// window base 0x181ed5200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED5200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  char v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  __int64 v27; // [rsp+20h] [rbp-18h]
  __int64 v28; // [rsp+28h] [rbp-10h]
  int v29; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v13 + 8) )
  {
    v28 = a1;
    v29 = a6;
    v26 = a5;
    v27 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v24);
  }
  else if ( a5 != v12 )
  {
    v14 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v14 == 0 )
      goto LABEL_9;
    v15 = *(_DWORD *)(v12 + 8 * v14 + 8) >> *(_BYTE *)(a5 + 12);
    v16 = (unsigned int)(a6 + 1);
    if ( (_DWORD)v16 == v15 )
      return sub_181ED528C(a1, a2, a3, a4: v16, a5, a6, a7, a8, a9, a10, a11, a12);
    v28 = a1;
    v27 = a3;
    v26 = a5;
    v29 = a6;
    v25 = sub_27C59A0(a1, a2, a3: a5, a4: v16, a5: (unsigned int)a6);
    result = sub_1ED56C0(a1: v18, a2: v19, a3: v27, a4: v17, a5: v28, a6: v25);
    if ( *(int *)(v13 + 16) <= 0 )
      return sub_277F280(a1: v22, a2: v23, a3: v21, a4: v25);
    return result;
  }
  v28 = a1;
  v29 = a6;
  v27 = a3;
  sub_2771080();
LABEL_9:
  sub_2771080();
  __halt();
}
