// sub_184F48500
// rva 0x04f48500  size 377  section .text  group text
// window base 0x184f48500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F48500(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 (__fastcall *v7)(__int64, __int64, _DWORD *, _QWORD, _QWORD); // rax
  __int64 result; // rax
  _DWORD *v9; // r8
  _DWORD v10[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v10 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __halt();
  }
  if ( (a3 & 0xFFFFFF00) != 0 )
  {
    v6 = HIWORD(a3);
    if ( (unsigned int)v6 <= 0x10 )
      __asm { jmp     rax; switch jump }
    v9 = (_DWORD *)(v4 + 377151472);
  }
  else
  {
    v9 = (_DWORD *)(v4 + 377151376);
  }
  v7 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v3 + *(_QWORD *)(v4 + 8LL * (*v9 >> 3) + 176));
  v10[5] = a3;
  result = v7(a1, a2, a3: v9, a4: a3, a5: a3);
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
