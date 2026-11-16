// sub_18501B6E0
// rva 0x0501b6e0  size 166  section .text  group text
// window base 0x18501b6e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501B6E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v19; // [rsp+8h] [rbp-10h]
  _DWORD *v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
  {
    v19 = a5;
    v20 = a3;
    MEMORY[0x181EB84E0]();
LABEL_7:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v8 + 8846554);
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
    return sub_18501B7A0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  if ( a5 != v8
    && (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v8[2 * (*a5 >> 3) + 11] & (0x641u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))] != 1601 )
  {
    goto LABEL_7;
  }
  v10 = (__int64 (*)(void))(v7 + *(_QWORD *)&v8[2 * (*a3 >> 3) + 38]);
  v20 = a3;
  v19 = a5;
  result = v10();
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
