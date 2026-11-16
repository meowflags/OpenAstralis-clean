// sub_4F45AA0
// rva 0x04f45aa0  size 238  section .text  group text
// window base 0x184f45aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F45AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  v10 = a3;
  v11 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
  }
  else if ( a3 != v8 )
  {
    v6 = *(_DWORD *)(a3 + 8);
    if ( v6 <= a5 )
    {
LABEL_22:
      sub_2771220(a1, a2, a3: (unsigned int)v11, a4: v11, a5: v6);
      goto LABEL_23;
    }
    v7 = *(unsigned __int16 *)(a3 + 2LL * a5 + 12);
    if ( v7 < 0xD800 || v7 >= 0xDC00 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return v7;
    }
    v13 = a5 + 1;
    if ( a6 > (int)v13 )
    {
      if ( v6 > (unsigned int)v13 )
      {
        if ( *(int *)(v9 + 16) <= 0 )
          v10 = sub_277F280();
        v14 = *(unsigned __int16 *)(v10 + 2 * v13 + 12);
        if ( v14 < 0xDC00 )
          return v7;
        if ( v14 < 0xE000 )
          return (v7 << 10) + v14 - 56613888;
        return v7;
      }
LABEL_23:
      sub_2771220(a1, a2: v13, a3: (unsigned int)v13, a4: v11, a5: v6);
      return v7;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v7;
  }
  sub_2771080(a1, a2, a3, a4: v11);
  goto LABEL_22;
}
