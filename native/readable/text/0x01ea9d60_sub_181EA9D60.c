// sub_1EA9D60
// rva 0x01ea9d60  size 400  section .text  group text
// window base 0x181ea9d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA9D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // [rsp+28h] [rbp-10h]
  int v20; // [rsp+30h] [rbp-8h]

  if ( *(_DWORD *)(a3 + 4) != 0 )
  {
    if ( a6 != 0 )
    {
      if ( *a5 != 0 )
        v7 = v6 + 8LL * (unsigned int)*a5;
      else
        v7 = 0;
    }
    else
    {
      v7 = *(_QWORD *)a5;
    }
    *(_QWORD *)(v6 + 376657400) = v7;
    if ( a6 != 0 )
      v8 = v6 + 8LL * (unsigned int)*a5;
    else
      v8 = *(_QWORD *)a5;
    v9 = (_DWORD *)(v8 - v6);
    if ( v9 != nullptr )
      v9 = (_DWORD *)((char *)v9 + v6);
    if ( v9 != nullptr )
    {
      v10 = 8LL * *(unsigned int *)(v6 + 58177844);
      if ( v10 != 0 )
        v10 += v6;
      if ( v10 > (unsigned __int64)v9 )
        goto LABEL_28;
      v12 = 8LL * *(unsigned int *)(v6 + 58177848);
      if ( v12 != 0 )
        v12 += v6;
      if ( (unsigned __int64)v9 > v12 )
      {
LABEL_28:
        if ( ((unsigned __int64)v9 < *(_QWORD *)(v6 + 376612552) || (unsigned __int64)v9 >= *(_QWORD *)(v6 + 376612568))
          && (*v9 & 1) == 0 )
        {
          v20 = a6;
          v19 = a5;
          if ( sub_1EA8F40(a1, a2, a3: (unsigned __int64)v9) != 0 )
            JUMPOUT(0x303D33EACLL);
          a6 = v20;
          a5 = v19;
          if ( v20 != 0 )
            *v19 = 0;
          else
            *(_QWORD *)v19 = v6;
        }
      }
    }
    if ( a6 != 0 )
    {
      if ( *a5 != 0 )
        result = v6 + 8LL * (unsigned int)*a5;
      else
        result = 0;
    }
    else
    {
      result = *(_QWORD *)a5;
    }
    *(_QWORD *)(v6 + 376657408) = result;
  }
  else
  {
    sub_276EFE0();
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
    return sub_1EA9F00(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18);
  }
  return result;
}
