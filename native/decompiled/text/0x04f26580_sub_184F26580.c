// sub_184F26580
// rva 0x04f26580  size 210  section .text  group text
// window base 0x184f26580: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F26580(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // r8
  __int64 v21; // [rsp+0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+8h] [rbp-10h]
  _DWORD *v23; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F26660();
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = v11 + 16;
    if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v10 + 32) )
    {
      return sub_184F2661E(a1: 34089376, a2, (_DWORD)a3, a4, a5: v11, a6: v12, a7, a8);
    }
    else
    {
      *(_QWORD *)(v10 + 40) = v12;
      *(_QWORD *)v11 = 34089376;
      *(_DWORD *)(v11 + 8) = 1;
      *(_DWORD *)(v11 + 12) = 0;
      v13 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v8
                                                                                          + *(_QWORD *)(v9 + 8LL * (*a3 >> 3) + 160));
      v23 = a3;
      v22 = v11;
      v14 = v13(a1: 1, a2, a3, a4: a3, a5: v11, a6: 0);
      if ( *(int *)(v10 + 16) <= 0 )
      {
        v14 = MEMORY[0x18277F280](a1: v17, a2: v18, a3: v15, a4: v16, a5: v22);
        v22 = v20;
      }
      if ( v14 == -1 )
        return 0xFFFFFFFFLL;
      else
        return *(unsigned __int16 *)(v22 + 12);
    }
  }
}
