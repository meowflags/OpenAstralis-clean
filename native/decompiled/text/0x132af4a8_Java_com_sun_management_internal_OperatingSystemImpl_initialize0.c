// Java_com_sun_management_internal_OperatingSystemImpl_initialize0
// rva 0x132af4a8  size 46  section .text  group text
// window base 0x1932af4a8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_com_sun_management_internal_OperatingSystemImpl_initialize0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  MEMORY[0x337540] = MEMORY[0x79778](a1);
  result = MEMORY[0x796F0](a1: v2, a2: v3, a3: v1, a4: 3372424);
  MEMORY[0x3375B0] = 0;
  return result;
}
