// sub_1815A8A40
// rva 0x015a8a40  size 1523  section .text  group text
// window base 0x1815a8a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A8A40(
        int a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _DWORD *v12; // r14
  __int64 v13; // r15
  __int64 result; // rax
  int v15; // ecx
  int v16; // ebx
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)v17 <= *(_QWORD *)(v13 + 8) )
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
    return sub_1815A9040();
  }
  v17[6] = a3;
  v17[5] = a5;
  if ( a5 == a3 )
  {
    result = 1;
LABEL_6:
    if ( *(int *)(v13 + 16) <= 0 )
      JUMPOUT(0x1815A8F8ELL);
    return result;
  }
  if ( a5 == v12 )
    JUMPOUT(0x1815A8C37LL);
  if ( *a5 >> 3 != 4475302 )
  {
    result = 0;
    goto LABEL_6;
  }
  v15 = a3[12];
  v16 = a5[12];
  if ( v16 == v15 )
    JUMPOUT(0x1815A8BD7LL);
  if ( v15 == 0 )
    JUMPOUT(0x1815A8C25LL);
  return sub_1815A8ADB(
           a1,
           a2,
           a3: (int)v12 + 8 * v15,
           a4: (int)v12 + 8 * v15,
           a5: (int)v12 + 8 * v16,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
