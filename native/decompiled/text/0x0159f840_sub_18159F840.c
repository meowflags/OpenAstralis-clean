// sub_18159F840
// rva 0x0159f840  size 198  section .text  group text
// window base 0x18159f840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159F840(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  _DWORD *v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v11 + 8) )
  {
    v14 = a1;
    v17 = a6;
    v16 = a5;
    v15 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_9;
  }
  if ( a6 != v10 && *a6 >> 3 != 4260335 )
    return sub_18159F8A7((_DWORD)a1, a2, a3, a4, a5, (_DWORD)a6, a7, a8, a9, a10);
  if ( a1 != v10 && *a1 >> 3 != 4260335 )
  {
LABEL_9:
    MEMORY[0x18276FC00](a1, a2, a3: a1, a4: a3, a5: v10 + 8520670);
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
    return sub_18159F920();
  }
  v17 = a6;
  v16 = a5;
  v15 = a3;
  v14 = a1;
  result = sub_18159F6E0((__int64)a1, a2, a3: (__int64)a1, a4);
  if ( *(int *)(v11 + 16) <= 0 )
    JUMPOUT(0x18159F8CCLL);
  return result;
}
