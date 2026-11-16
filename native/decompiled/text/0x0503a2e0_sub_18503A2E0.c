// sub_18503A2E0
// rva 0x0503a2e0  size 249  section .text  group text
// window base 0x18503a2e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503A2E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, __int64); // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  void (__fastcall *v20)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  _QWORD v21[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+18h] [rbp-20h]
  _DWORD *v23; // [rsp+20h] [rbp-18h]
  unsigned int v24; // [rsp+2Ch] [rbp-Ch]
  __int64 v25; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v21 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503A3E0();
  }
  else
  {
    v25 = a5;
    v24 = *a3 >> 3;
    v8 = *(_QWORD *)(v6 + 8LL * v24 + 152);
    v23 = a3;
    v9 = ((__int64 (*)(void))(v5 + v8))();
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5 + *(_QWORD *)(v6 + 8LL * v24 + 144));
    v22 = v9;
    v13 = v10(a1: v11, a2: v12, a3: v23, a4: v24, a5: v25);
    v21[2] = v13;
    if ( v13 == v6 )
    {
      v20 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v5
                                                                                      + *(_QWORD *)(v6 + 8LL * v24 + 120));
      v20(a1: v15, a2: v16, a3: v23, a4: v20, a5: v25, a6: v22);
    }
    else
    {
      sub_1850395E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: (__int64)v23, a6: v22);
    }
    if ( *(__int16 *)(v6 + 8LL * v24 + 62) >= 4
      && *(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8LL * v24 + 16) + 24) == 71171 )
    {
      MEMORY[0x186117EC0](a1: v17, a2: v18, a3: v23);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v22;
  }
}
