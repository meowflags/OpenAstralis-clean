// sub_185044620
// rva 0x05044620  size 203  section .text  group text
// window base 0x185044620: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185044620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(a3 + 112);
  if ( (_DWORD)v6 == 0 )
    goto LABEL_5;
  v7 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v4
                                   + 8LL * *(unsigned int *)(v4 + 8 * v7 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v4 + 8 * v7 + 44) & (0x62Cu >> HIBYTE(*(_DWORD *)(v4 + 8 * v7 + 44))))
                                   + 12) != 1580 )
  {
LABEL_8:
    MEMORY[0x182770780]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185044700();
  }
  v13 = a3;
  v8 = *(_DWORD *)(v4 + 8 * v6) >> 3;
  v9 = *(_DWORD *)(v4 + 8 * v8 + 44) & (0x62Cu >> HIBYTE(*(_DWORD *)(v4 + 8 * v8 + 44)));
  v10 = HIWORD(*(_DWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8 * v8 + 20) + 4 * v9 + 12));
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))(v3 + *(_QWORD *)(v4 + 8 * v8 + v10)))(
             a1,
             a2: v9,
             a3: v4 + 8 * v6,
             a4: v10,
             a5: 0);
  *(_DWORD *)(v13 + 112) = 0;
LABEL_5:
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
