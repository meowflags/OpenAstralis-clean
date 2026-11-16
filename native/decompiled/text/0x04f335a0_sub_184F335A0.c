// sub_184F335A0
// rva 0x04f335a0  size 95  section .text  group text
// window base 0x184f335a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F335A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  _DWORD *v12; // [rsp+10h] [rbp-18h]
  unsigned int v13; // [rsp+1Ch] [rbp-Ch]
  unsigned int v14; // [rsp+20h] [rbp-8h]
  unsigned int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_184F33600)();
  }
  else
  {
    v15 = a2;
    v14 = a1;
    v13 = a6;
    v12 = a5;
    v11 = a3;
    v7 = sub_184F2FEA0(a1, a2, a3, a4: (__int64)a5, a5);
    result = sub_184F33600(a1: v14, a2: v15, a3: v11, a4: v8, a5: v7, a6: v13);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
