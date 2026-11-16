// sub_184F18300
// rva 0x04f18300  size 338  section .text  group text
// window base 0x184f18300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F18300(
        unsigned int a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 result; // rax
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 i; // rcx
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]
  _DWORD *v29; // [rsp+10h] [rbp-28h]
  int v30; // [rsp+1Ch] [rbp-1Ch]
  void (__fastcall *v31)(_QWORD, _DWORD *, _DWORD *, __int64, _QWORD); // [rsp+20h] [rbp-18h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v29 = a3;
  v28 = a5;
  v34 = a6;
  v33 = a1;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v10 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v9 )
  {
    v32 = *(_DWORD *)(a5 + 8);
    result = MEMORY[0x186329C40](a1: v9, a2, a3: a6, a4, a5: a1, a6: v32);
    if ( v33 < 1 )
    {
      i = 0;
LABEL_9:
      if ( *(int *)(v10 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v14, a2: v15, a3: v12, a4: i, a5: v16, a6: v17);
      return result;
    }
    if ( v32 > v34 )
    {
      v18 = *(char *)(v28 + v34 + 12);
      v19 = *(_QWORD *)(v9 + 8LL * (*v29 >> 3) + 128);
      v31 = (void (__fastcall *)(_QWORD, _DWORD *, _DWORD *, __int64, _QWORD))(v8 + v19);
      ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _QWORD))(v8 + v19))(
        a1: v14,
        a2: v15,
        a3: v29,
        a4: v19,
        a5: v18);
      for ( i = 1; ; i = (unsigned int)(v30 + 1) )
      {
        result = v32;
        v14 = (unsigned int)v33;
        v17 = v34;
        v16 = v28;
        v12 = v29;
        if ( v33 <= (int)i )
          break;
        v7 = v34 + (unsigned int)i;
        if ( v32 <= (unsigned int)v7 )
          goto LABEL_16;
        v30 = i;
        v31(a1: (unsigned int)v33, a2: v29, a3: v29, a4: i, a5: (unsigned int)*(char *)(v28 + v7 + 12));
      }
      goto LABEL_9;
    }
LABEL_15:
    LODWORD(result) = MEMORY[0x182771220](a1: v14, a2: v15, a3: v34, a4: v13, a5: v32);
LABEL_16:
    MEMORY[0x182771220](a1: v14, a2: (unsigned int)i, a3: (unsigned int)v7, a4: v12, a5: (unsigned int)result);
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
    return sub_184F18460(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
  }
  MEMORY[0x182771080]();
  goto LABEL_15;
}
