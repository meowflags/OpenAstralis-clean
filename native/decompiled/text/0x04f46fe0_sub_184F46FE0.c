// sub_184F46FE0
// rva 0x04f46fe0  size 393  section .text  group text
// window base 0x184f46fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F46FE0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _QWORD, _QWORD, _QWORD); // rax
  __int64 result; // rax
  _DWORD *v11; // r9
  _DWORD v12[6]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __halt();
  }
  if ( (a3 & 0xFFFFFF00) != 0 )
  {
    v8 = HIWORD(a3);
    if ( (unsigned int)v8 <= 0x10 )
      __asm { jmp     rax; switch jump }
    v11 = (_DWORD *)(v6 + 377151472);
  }
  else
  {
    v11 = (_DWORD *)(v6 + 377151376);
  }
  v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD, _QWORD))(v5
                                                                                  + *(_QWORD *)(v6
                                                                                              + 8LL * (*v11 >> 3)
                                                                                              + 112));
  v12[5] = a3;
  v12[4] = a5;
  result = v9(a1, a2, a3: v11, a4: a3, a5: a3, a6: a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
