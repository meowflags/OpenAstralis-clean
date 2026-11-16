// Java_sun_net_dns_ResolverConfigurationImpl_notifyAddrChange0
// rva 0x132ad4c4  size 81  section .text  group text
// window base 0x1932ad4c4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_dns_ResolverConfigurationImpl_notifyAddrChange0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  _BYTE v13[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]

  v14 = 0;
  if ( (unsigned int)__imp_IPHLPAPI.DLL!NotifyAddrChange(a1, a2, a3: v13, a4: &a10) == 997 )
    return (unsigned int)((unsigned int)__imp_KERNEL32.dll!GetOverlappedResult(a1: v10, a2: v11, a3: v13, a4: a10, a5: &a9, a6: 1) != 0) - 1;
  else
    return 0xFFFFFFFFLL;
}
