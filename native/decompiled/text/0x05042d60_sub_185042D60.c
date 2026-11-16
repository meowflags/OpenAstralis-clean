// sub_185042D60
// rva 0x05042d60  size 96  section .text  group text
// window base 0x185042d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185042D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    return sub_185042DC0();
  }
  else
  {
    if ( a5 != v5 )
    {
      v8 = *a5 >> 3;
      if ( SHIWORD(v5[2 * v8 + 15]) >= 3 )
        goto LABEL_5;
      do
      {
        MEMORY[0x18276FC00](a1, a2, a3: v7, a4: v7, a5: v5 + 10118460);
LABEL_5:
        a3 = (unsigned int)v5[2 * v8 + 4];
      }
      while ( v5[2 * a3 + 5] != 81882 );
    }
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v7);
    return 1;
  }
}
