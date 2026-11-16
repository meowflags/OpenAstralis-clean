// sub_132B004C
// rva 0x132b004c  size 263  section .text  group text
// window base 0x1932b004c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B004C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( __imp_KERNEL32.dll!EnterCriticalSection != 0 )
    return 0;
  v4 = 0;
  __imp_KERNEL32.dll!GetCurrentThreadId(a1, a2, a3, a4: 3372424);
  ++__imp_KERNEL32.dll!LoadLibraryA;
  if ( __imp_api-ms-win-crt-heap-l1-1-0.dll!free == 0 )
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free = __imp_KERNEL32.dll!FreeLibrary();
  if ( __imp_KERNEL32.dll!LeaveCriticalSection == 0 )
  {
    v8 = MEMORY[0x79468]/* 0x79468 */(a1: v6, a2: v7, a3: v5, a4: 542400);
    v6 = v8;
    if ( v8 != 0 && (int)sub_132AF6C0(a1: v8, a2: v7, a3: v5, a4: v8) >= 0 && (int)sub_132AF4D8(a1: v6, a2: v7) >= 0 )
    {
      MEMORY[0x3375ec]/* 0x3375ec */ = 1;
    }
    else
    {
      v4 = 0xFFFFFFFF;
      if ( MEMORY[0x3375b8]/* 0x3375b8 */ != 0 )
      {
        MEMORY[0x79ae0]/* 0x79ae0 */(a1: v6, a2: v7, a3: v5, a4: MEMORY[0x3375b8]/* 0x3375b8 */);
        MEMORY[0x3375b8]/* 0x3375b8 */ = 0;
      }
      if ( MEMORY[0x3375c0]/* 0x3375c0 */ != 0 )
      {
        MEMORY[0x79ae0]/* 0x79ae0 */(a1: v6, a2: v7, a3: v5, a4: MEMORY[0x3375c0]/* 0x3375c0 */);
        MEMORY[0x3375c0]/* 0x3375c0 */ = 0;
      }
      MEMORY[0x3375c8]/* 0x3375c8 */ = 0;
      if ( v6 != 0 )
        MEMORY[0x79788]/* 0x79788 */(a1: v6, a2: v7, a3: v5, a4: v6);
    }
  }
  if ( --MEMORY[0x3375b4]/* 0x3375b4 */ == 0 )
    MEMORY[0x3375b0]/* 0x3375b0 */ = 0;
  MEMORY[0x796e8]/* 0x796e8 */(a1: v6, a2: v7, a3: v5, a4: 3372424);
  return v4;
}
