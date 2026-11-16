// sub_1932C9380
// rva 0x132c9380  size 116  section .text  group text
// window base 0x1932c9380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9380(_DWORD a1, _DWORD a2, _DWORD a3, __int64 a4, _DWORD a5, _DWORD a6, __int64 a7)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // edi

  MEMORY[0x79548]();
  v8 = *(_QWORD *)(a4 + 248);
  v9 = 0;
  do
  {
    result = MEMORY[0x79550](a1: v9, a2: v8, a3: &a7, a4: v8, a5: 0);
    if ( result == 0 )
      break;
    result = MEMORY[0x79558](a1: v11, a2: v12, a3: a7, a4: 0, a5: v12, a6: result);
    v9 = (unsigned int)(v13 + 1);
  }
  while ( (int)v9 < 2 );
  return result;
}
