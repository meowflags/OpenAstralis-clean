// sub_1ED8F00
// rva 0x01ed8f00  size 203  section .text  group text
// window base 0x181ed8f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED8F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // ecx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  int v17; // [rsp+14h] [rbp-4h]

  v17 = a5;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v15);
    goto LABEL_15;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_15:
    sub_276EFE0();
LABEL_16:
    sub_276F0E0();
LABEL_17:
    sub_276EFE0();
    goto LABEL_18;
  }
  v9 = *(_DWORD *)(v6 + 8 * v8 + 8);
  if ( v9 <= (int)a5 )
  {
LABEL_4:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  if ( v9 <= (unsigned int)a5 )
    goto LABEL_16;
  v16 = a3;
  if ( *(_QWORD *)(v6 + 8 * v8 + 8LL * (unsigned int)a5 + 16) == 0 )
    goto LABEL_4;
  v11 = sub_1ED9280(a1, a2, a3, a4: (unsigned int)a5);
  v14 = *(unsigned int *)(v16 + 4);
  if ( (_DWORD)v14 == 0 )
    goto LABEL_17;
  if ( v17 + v11 > *(_DWORD *)(v6 + 8 * v14 + 8) )
  {
LABEL_18:
    sub_28C1C40(a1: v12, a2: v13, a3: v6 + 366566400);
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
    JUMPOUT(0x181ED8FE0LL);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return 1;
}
