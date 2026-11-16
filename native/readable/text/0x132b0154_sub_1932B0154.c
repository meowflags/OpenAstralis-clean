// sub_132B0154
// rva 0x132b0154  size 210  section .text  group text
// window base 0x1932b0154: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B0154(_DWORD a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // edi

  v3 = 0;
  if ( __imp_KERNEL32.dll!EnterCriticalSection == 0 )
  {
    __imp_KERNEL32.dll!GetCurrentThreadId(a1: 0, a2, a3, a4: 3372424);
    ++__imp_api-ms-win-crt-heap-l1-1-0.dll!calloc;
    if ( __imp_api-ms-win-crt-heap-l1-1-0.dll!calloc == 0 )
      __imp_KERNEL32.dll!LeaveCriticalSection = MEMORY[0x79760]/* 0x79760 */();
    if ( MEMORY[0x3375f0]/* 0x3375f0 */ == 0 )
    {
      if ( (int)sub_132B004C(a1: v5, a2: v6, a3: v4) >= 0
        && (MEMORY[0x3375d0]/* 0x3375d0 */ = MEMORY[0x79ad8]/* 0x79ad8 */(a1: v8, a2: v6, a3: 24, a4: MEMORY[0x3375c8]/* 0x3375c8 */), MEMORY[0x3375d0]/* 0x3375d0 */ != 0)
        && (MEMORY[0x3375d8]/* 0x3375d8 */ = MEMORY[0x79ad8]/* 0x79ad8 */(a1: v11, a2: v6, a3: 32, a4: 1), MEMORY[0x3375d8]/* 0x3375d8 */ != 0)
        && (int)sub_132AFAC8(a1: v12, a2: v6, a3: v4) >= 0 )
      {
        MEMORY[0x3375f0]/* 0x3375f0 */ = 1;
      }
      else
      {
        sub_132AF910(a1: 0xFFFFFFFFLL, a2: v6, a3: v4, a4: v7, a5: v9, a6: v10);
      }
    }
    if ( --MEMORY[0x3375b4]/* 0x3375b4 */ == 0 )
      MEMORY[0x3375b0]/* 0x3375b0 */ = 0;
    MEMORY[0x796e8]/* 0x796e8 */(a1: v5, a2: v6, a3: v4, a4: 3372424);
    return v13;
  }
  return v3;
}
