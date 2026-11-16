// sub_1EB8240
// rva 0x01eb8240  size 122  section .text  group text
// window base 0x181eb8240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EB8240(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  _QWORD v13[4]; // [rsp+0h] [rbp-28h] BYREF
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+24h] [rbp-4h]

  v15 = a3;
  v14 = a5;
  if ( a5 <= a3 || a5 < 2 )
  {
    if ( a5 <= a3 )
      JUMPOUT(0x303D42299LL);
    HIDWORD(v13[2]) = a5 >= 2;
    result = sub_28C1C40(a1, a2, a3: v5 + 367049024);
    goto LABEL_9;
  }
  if ( a3 == 1 )
    *(_QWORD *)(v6 + 8) -= 0x8000LL;
  result = *(_QWORD *)(v6 + 8);
  if ( result >= (unsigned __int64)v13 )
  {
LABEL_9:
    v13[3] = result;
    sub_28C1C40(a1, a2, a3: v5 + 367048336);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EB82C0(a1: v10, a2: v11, a3: v8, a4: v9, a5: v12);
  }
  return result;
}
