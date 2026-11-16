// Java_java_lang_ProcessEnvironment_environmentBlock
// rva 0x132b43a8  size 125  section .text  group text
// window base 0x1932b43a8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessEnvironment_environmentBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v5; // rax
  __int64 v6; // rsi
  _WORD *v7; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  v5 = (_WORD *)__imp_KERNEL32.dll!GetEnvironmentStringsW();
  v7 = v5;
  if ( v5 != nullptr )
  {
    v9 = 0;
    if ( *v5 != 0 )
    {
      v10 = 0;
      do
      {
        do
        {
          v11 = v7[v10];
          v9 = (unsigned int)(v9 + 1);
          ++v10;
        }
        while ( v11 != 0 );
      }
      while ( v7[v10] != 0 );
    }
    v12 = (*(__int64 (__fastcall **)(_WORD *, __int64, _WORD *, __int64, __int64))(*(_QWORD *)a4 + 1304LL))(
            a1: v7,
            a2: v6,
            a3: v7,
            a4,
            a5: v9);
    __imp_KERNEL32.dll!FreeEnvironmentStringsW(a1: v14, a2: v15, a3: v13, a4: v14);
    return v12;
  }
  else
  {
    JNU_ThrowOutOfMemoryError(a1: 0, a2: v6, a3: 543856, a4);
    return 0;
  }
}
