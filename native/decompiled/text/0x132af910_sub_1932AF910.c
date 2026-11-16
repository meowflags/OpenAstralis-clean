// sub_1932AF910
// rva 0x132af910  size 303  section .text  group text
// window base 0x1932af910: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AF910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // [rsp+0h] [rbp-28h]

  v6 = MEMORY[0x3375D0];
  if ( MEMORY[0x3375D0] != 0 )
  {
    v7 = MEMORY[0x3375C8];
    v8 = 0;
    if ( MEMORY[0x3375C8] > 0 )
    {
      do
      {
        v9 = v6 + 24LL * v8;
        if ( v9 != 0 )
        {
          sub_1932AFFFC(a1, a2, a3: v9 + 16, a4: v9, a5: v7, a6, a7: v15);
          v6 = MEMORY[0x3375D0];
          v7 = MEMORY[0x3375C8];
        }
        ++v8;
      }
      while ( v8 < v7 );
    }
    result = MEMORY[0x79AE0](a1, a2, a3: v6, a4: v6);
    MEMORY[0x3375D0] = 0;
  }
  v11 = MEMORY[0x3375D8];
  if ( MEMORY[0x3375D8] != 0 )
  {
    v12 = MEMORY[0x3375D8];
    if ( *(_QWORD *)(MEMORY[0x3375D8] + 16LL) != 0 )
    {
      v13 = 0;
      if ( *(int *)(MEMORY[0x3375D8] + 24LL) > 0 )
      {
        a2 = 0;
        do
        {
          v14 = (_QWORD *)(a2 + *(_QWORD *)(v12 + 16));
          if ( v14 != nullptr && *v14 != 0 )
          {
            MEMORY[0x337578](a1: v13);
            *v14 = 0;
          }
          v13 = (unsigned int)(v13 + 1);
          a2 += 8;
        }
        while ( (int)v13 < *(_DWORD *)(v12 + 24) );
      }
      MEMORY[0x79AE0](a1: v13, a2, a3: v6, a4: *(_QWORD *)(v12 + 16));
      v11 = MEMORY[0x3375D8];
      *(_QWORD *)(v12 + 16) = 0;
    }
    if ( *(_QWORD *)v12 != 0 )
    {
      MEMORY[0x337558](a1);
      v11 = MEMORY[0x3375D8];
      *(_QWORD *)v12 = 0;
    }
    result = MEMORY[0x79AE0](a1, a2, a3: v6, a4: v11);
    MEMORY[0x3375D8] = 0;
  }
  MEMORY[0x3375E0] = 0;
  MEMORY[0x3375CC] = 0;
  return result;
}
