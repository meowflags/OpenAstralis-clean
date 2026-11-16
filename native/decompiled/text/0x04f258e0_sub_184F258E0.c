// sub_184F258E0
// rva 0x04f258e0  size 185  section .text  group text
// window base 0x184f258e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F258E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  int v14; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a5;
    v13 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v8 = (unsigned int)a3[4];
  if ( (_DWORD)v8 == 0 )
  {
LABEL_7:
    v14 = a5;
    v13 = a3;
    v9 = MEMORY[0x182771080]();
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(v6 + 8 * v8 + 8);
  if ( v9 < 2 )
  {
LABEL_8:
    MEMORY[0x182771220](a1, a2, a3: 1, a4: a3, a5: v9);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F259A0();
  }
  *(_BYTE *)(v6 + 8 * v8 + 13) = a5;
  *(_BYTE *)(v6 + 8 * v8 + 12) = BYTE1(a5);
  v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v5
                                                                                      + *(_QWORD *)(v6
                                                                                                  + 8LL * (*a3 >> 3)
                                                                                                  + 200));
  v14 = a5;
  v13 = a3;
  result = v10(a1: 2, a2, a3, a4: a3, a5: v6 + 8 * v8, a6: 0);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
