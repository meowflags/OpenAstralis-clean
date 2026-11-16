// sub_1ED73C0
// rva 0x01ed73c0  size 223  section .text  group text
// window base 0x181ed73c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED73C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  char v27; // [rsp+0h] [rbp-18h] BYREF
  __int64 v28; // [rsp+8h] [rbp-10h]
  __int64 v29; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v27);
    __builtin_debugtrap();
    return sub_1ED74A0(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7, a8, a9, a10);
  }
  else
  {
    v12 = *(unsigned int *)(v11 + 276);
    v13 = v10 + 8 * v12;
    if ( (_DWORD)v12 == 0 )
    {
      v19 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v19 + 32) > *(_QWORD *)(v11 + 32) )
      {
        v29 = v13;
        v19 = sub_1EAA920(a1, a2, a3: 39320168);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v19 + 32;
        *(_DWORD *)v19 = 39320168;
        *(_DWORD *)(v19 + 4) = 0;
        *(_QWORD *)(v19 + 8) = 0;
        *(_QWORD *)(v19 + 16) = 0;
        *(_QWORD *)(v19 + 24) = 0;
        v29 = v13;
      }
      v28 = v19;
      sub_5968D80();
      v20 = v28;
      *(_DWORD *)(v11 + 276) = (unsigned __int64)(v28 - v10) >> 3;
      v13 = v20;
    }
    v28 = v13;
    v14 = sub_6336600(a1, a2, a3: v13, a4, a5: 0x7FFFFFFF);
    if ( *(int *)(v11 + 16) <= 0 )
      v14 = sub_277F280(a1: v16, a2: v17, a3: v15, a4: v28);
    return (unsigned int)(v14 + 1);
  }
}
