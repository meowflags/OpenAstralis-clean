// sub_132B90DC
// rva 0x132b90dc  size 289  section .text  group text
// window base 0x1932b90dc: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B90DC(
        _DWORD a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int a10)
{
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // edi

  v10 = 0;
  a10 = 0;
  a9 = 0;
  v11 = 0;
  v13 = __imp_KERNEL32.dll!GetStdHandle(a1: a4, a2, a3, a4: 4294967286LL);
  v16 = v13;
  if ( v13 == -1 )
    return 0;
  if ( (unsigned int)__imp_KERNEL32.dll!GetNumberOfConsoleInputEvents(a1: v14, a2: v15, a3: &a9, a4: v13) == 0 )
  {
    if ( v18 != -1 )
    {
      if ( (unsigned int)__imp_KERNEL32.dll!PeekNamedPipe(a1: v18, a2: v19, a3: 0, a4: v18, a5: 0, a6: 0) == 0 )
        *a3 = 0;
      return 1;
    }
    return v10;
  }
  v21 = a9;
  if ( a9 > __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc )
  {
    v21 = __imp_KERNEL32.dll!PeekConsoleInputA;
    a9 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free;
  }
  if ( 20 * v21 != 0 )
    JUMPOUT(0x32651317DLL);
  v22 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: 1, a2: v19, a3: v17, a4: 1);
  if ( v22 == 0 )
    return 0;
  if ( (unsigned int)MEMORY[0x79510]/* 0x79510 */(a1: v23, a2: v22, a3: v22, a4: v16, a5: a9, a6: &a10) == 0 )
  {
    MEMORY[0x79ae0]/* 0x79ae0 */(a1: v25, a2: v26, a3: v24, a4: v26);
    return 0;
  }
  if ( a9 != 0 )
  {
    v27 = a9;
    v28 = v26 + 4;
    do
    {
      if ( *(_WORD *)(v28 - 4) == (_WORD)v25 && *(_DWORD *)v28 == (_DWORD)v25 )
      {
        v10 += v25;
        if ( *(_BYTE *)(v28 + 10) != 13 )
          JUMPOUT(0x3265131E4LL);
        v11 = v10;
      }
      v28 += 20;
      v27 -= v25;
    }
    while ( v27 != 0 );
  }
  MEMORY[0x79ae0]/* 0x79ae0 */(a1: v25, a2: v26, a3: v24, a4: v26);
  *a3 = v11;
  return v29;
}
