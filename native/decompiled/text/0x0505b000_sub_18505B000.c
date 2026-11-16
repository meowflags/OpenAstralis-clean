// sub_18505B000
// rva 0x0505b000  size 159  section .text  group text
// window base 0x18505b000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505B000(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v8; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v7 <= *(_QWORD *)(v4 + 8) )
  {
    v8 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v5 = (unsigned __int16)*(_DWORD *)(v3
                                   + 8LL * *(unsigned int *)(v3 + 8LL * (*a3 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44)
                                    & (0x1ECDu >> HIBYTE(*(_DWORD *)(v3 + 8LL * (*a3 >> 3) + 44))))
                                   + 12);
  if ( (_DWORD)v5 != 7885 )
  {
LABEL_7:
    v8 = a3;
    MEMORY[0x182770780]();
  }
  else if ( *a3 >> 3 == 5414793 )
  {
    v8 = a3;
    result = MEMORY[0x185F1EE80]();
    if ( *(int *)(v4 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276FC00](a1, a2, a3, a4: v5, a5: v3 + 43318640);
  __builtin_debugtrap();
  return sub_18505B0A0();
}
