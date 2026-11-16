// sub_1932BF840
// rva 0x132bf840  size 147  section .text  group text
// window base 0x1932bf840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BF840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  int v14; // esi
  __int64 v15; // rdi

  MEMORY[0x79AE0](a1, a2, a3, a4: *(_QWORD *)(a4 + 88));
  v5 = *(_QWORD *)(a4 + 104);
  *(_QWORD *)(a4 + 88) = 0;
  result = MEMORY[0x79AE0](a1: v7, a2: v8, a3: v6, a4: v5);
  v12 = *(_QWORD *)(a4 + 136) == 0;
  *(_QWORD *)(a4 + 104) = 0;
  if ( !v12 )
  {
    v13 = 0;
    if ( *(int *)(a4 + 148) > 0 )
    {
      v11 = 0;
      do
      {
        MEMORY[0x79AE0](a1: v11, a2: v13, a3: v10, a4: *(_QWORD *)(*(_QWORD *)(a4 + 136) + v11));
        v13 = (unsigned int)(v14 + 1);
        v11 = v15 + 8;
      }
      while ( (int)v13 < *(_DWORD *)(a4 + 148) );
    }
    result = MEMORY[0x79AE0](a1: v11, a2: v13, a3: v10, a4: *(_QWORD *)(a4 + 136));
    *(_QWORD *)(a4 + 136) = 0;
  }
  return result;
}
