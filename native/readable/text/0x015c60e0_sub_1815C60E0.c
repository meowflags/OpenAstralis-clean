// sub_15C60E0
// rva 0x015c60e0  size 207  section .text  group text
// window base 0x1815c60e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C60E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v9 + 8) )
    return sub_1815C6187(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( *(_BYTE *)(v8 + 376356186) != 0 )
    JUMPOUT(0x1815C6191LL);
  if ( a3 == v8 )
  {
    v10 = v8;
    v15 = a3;
  }
  else
  {
    v15 = a3;
    v10 = sub_1EB5100();
  }
  v11 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v9 + 32) )
  {
    v14 = v10;
    v11 = sub_1EAA920(a1, a2, a3: 34102056);
    v10 = v14;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v11 + 16;
    *(_DWORD *)v11 = 34102056;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
  }
  *(_DWORD *)(v11 + 4) = (unsigned __int64)(v10 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    sub_277F280();
  return v11;
}
