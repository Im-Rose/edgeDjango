from django.contrib import admin
from.models import Problem,Solution


# Register your models here.
@admin.register(Problem)
class ProblemAdmin(admin.ModelAdmin):
    list_display = ('created_by','title')
    search_fields = ('title',)



@admin.register(Solution)
class SolutionAdmin(admin.ModelAdmin):
    list_display = ('id','problem')
    list_filter = ('problem',)


