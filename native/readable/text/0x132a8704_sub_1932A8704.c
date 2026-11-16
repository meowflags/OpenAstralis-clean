// sub_132A8704
// rva 0x132a8704  size 248  section .text  group text
// window base 0x1932a8704: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A8704(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  v3 = __imp_KERNEL32.dll!GetModuleHandleW(a1, a2, a3, a4: 536880);
  v6 = v3;
  if ( v3 == 0 )
    return 0xFFFFFFFFLL;
  v7 = __imp_KERNEL32.dll!GetProcAddress(a1: v4, a2: v5, a3: 536904, a4: v3);
  if ( v7 == 0 )
    return 0xFFFFFFFFLL;
  __imp_KERNEL32.dll!GetProcAddress = v7;
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))__imp_KERNEL32.dll!GetProcAddress(
                                                                                  a1: v8,
                                                                                  a2: v9,
                                                                                  a3: 536928,
                                                                                  a4: v6);
  if ( v10 == nullptr )
    return 0xFFFFFFFFLL;
  __imp_KERNEL32.dll!GetProcAddress = v10;
  v13 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))__imp_KERNEL32.dll!GetProcAddress(
                                                                                  a1: v11,
                                                                                  a2: v12,
                                                                                  a3: 536944,
                                                                                  a4: v6);
  if ( v13 == nullptr )
    return 0xFFFFFFFFLL;
  __imp_KERNEL32.dll!GetProcAddress = v13;
  v16 = __imp_KERNEL32.dll!GetProcAddress(a1: v14, a2: v15, a3: 536968, a4: v6);
  if ( v16 == 0 )
    return 0xFFFFFFFFLL;
  MEMORY[0x337498]/* 0x337498 */ = v16;
  v19 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MEMORY[0x79738]/* 0x79738 */(
                                                                                  a1: v17,
                                                                                  a2: v18,
                                                                                  a3: 536992,
                                                                                  a4: v6);
  if ( v19 == nullptr )
    return 0xFFFFFFFFLL;
  MEMORY[0x3374a0]/* 0x3374a0 */ = v19;
  v22 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MEMORY[0x79738]/* 0x79738 */(
                                                                                  a1: v20,
                                                                                  a2: v21,
                                                                                  a3: 537016,
                                                                                  a4: v6);
  if ( v22 == nullptr )
    return 0xFFFFFFFFLL;
  MEMORY[0x3374a8]/* 0x3374a8 */ = v22;
  v25 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MEMORY[0x79738]/* 0x79738 */(a1: v23, a2: v24, a3: 537040, a4: v6);
  if ( v25 == nullptr )
    return 0xFFFFFFFFLL;
  MEMORY[0x3374b0]/* 0x3374b0 */ = v25;
  return 0;
}
