// sub_184F36F00
// rva 0x04f36f00  size 127  section .text  group text
// window base 0x184f36f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F36F00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-10h]
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_184F36F80(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16);
  }
  else
  {
    v19 = a3;
    if ( a5 == v6 )
    {
      v18 = a5;
      v9 = (__int64)(v6 + 88325320);
    }
    else
    {
      v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 26]);
      v18 = a5;
      v9 = v8(a1, a2, a3: a5);
    }
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v5 + *(_QWORD *)&v6[2 * (*v19 >> 3) + 46]);
    result = v10(a1, a2, a3: v19, a4: v10, a5: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
