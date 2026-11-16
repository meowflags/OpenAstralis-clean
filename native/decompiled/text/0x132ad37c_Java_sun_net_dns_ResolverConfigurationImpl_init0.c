// Java_sun_net_dns_ResolverConfigurationImpl_init0
// rva 0x132ad37c  size 106  section .text  group text
// window base 0x1932ad37c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_dns_ResolverConfigurationImpl_init0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
             a1: a3,
             a2,
             a3,
             a4,
             a5: 538904,
             a6: 535736);
  MEMORY[0x337508] = result;
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
               a1: v6,
               a2: v7,
               a3: v6,
               a4,
               a5: 538920,
               a6: 535736);
    MEMORY[0x337510] = result;
  }
  return result;
}
