// sub_15A4680
// rva 0x015a4680  size 318  section .text  group text
// window base 0x1815a4680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A4680(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 j; // rax
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  v19 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( *(_DWORD *)(a3 + 16) != 0 )
  {
    v18 = v4 + 376614024;
    if ( sub_53F1A20(a1, a2, a3: v4 + 376614024) == v4 )
      goto LABEL_8;
    for ( i = v18; ; i = v16 )
    {
      while ( sub_53F1A20(a1: v6, a2: v7, a3: i) != v4 )
      {
        if ( *(int *)(v5 + 16) <= 0 )
          goto LABEL_25;
        i = v18;
      }
LABEL_8:
      v9 = v19;
      ++*(_DWORD *)(v19 + 44);
      v10 = *(unsigned int *)(v9 + 12);
      v11 = v4 + 8 * v10;
      if ( (_DWORD)v10 != 0 )
        break;
LABEL_23:
      LODWORD(j) = sub_2771080(a1: v6, a2: v7, a3: v9, a4: v11);
LABEL_24:
      sub_2771220(a1: v6, a2: v7, a3: (unsigned int)j, a4: v11, a5: v3);
LABEL_25:
      sub_277F280(a1: v6, a2: v7, a3: v19, a4: v18);
    }
    v3 = *(_DWORD *)(v4 + 8 * v10 + 8);
    if ( v3 != 0 )
    {
      *(_DWORD *)(v4 + 8 * v10 + 12) = 0;
      for ( j = 1; (int)v3 > (int)j; j = (unsigned int)(j + 1) )
      {
        if ( v3 <= (unsigned int)j )
          goto LABEL_24;
        *(_DWORD *)(v11 + 4 * j + 12) = 0;
      }
    }
    *(_DWORD *)(v9 + 36) = 0;
    result = sub_53F1A20(a1: v6, a2: v7, a3: v18, a4: v11);
    if ( result != v4 )
    {
      while ( 1 )
      {
        result = sub_53F1A20(a1: v14, a2: v15, a3: v18);
        if ( result == v4 )
          break;
        if ( *(int *)(v5 + 16) <= 0 )
          sub_277F280(a1: v14, a2: v15, a3: v19, a4: v18);
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_23;
}
