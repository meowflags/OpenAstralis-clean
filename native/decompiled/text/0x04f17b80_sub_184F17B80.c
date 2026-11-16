// sub_184F17B80
// rva 0x04f17b80  size 95  section .text  group text
// window base 0x184f17b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F17B80(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 (*v6)(void); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    v13 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v6 = (__int64 (*)(void))(v3 + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 144));
  v13 = a3;
  v7 = v6();
  if ( v7 == v4 )
  {
LABEL_6:
    MEMORY[0x182771080](a1: v9, a2: v10, a3: v13);
    __builtin_debugtrap();
    return sub_184F17BE0();
  }
  result = MEMORY[0x184FEBC20](a1: v9, a2: v10, a3: v7, a4: v8, a5: 0);
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
